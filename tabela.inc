<?php
                $tabela = array(array('02K01','Tecnologia Web II','Segunda','Charles'),array('02K01','Linguagem de Programacao I','Terca','Joao'),array('02K01','Linguagem de Programacao I','Quarta','Charles'));
                for($i=0;$i<3;$i++){
                    echo "<tr>";
                    for($j=0;$j<4;$j++){
                        echo "<td>".$tabela[$i][$j]."</td>";
                    }
                    echo "</tr>";
                }
            ?>